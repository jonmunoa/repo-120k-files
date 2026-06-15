// fichero 18577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18577;

Registro18577 crear_registro18577(int id) {
    Registro18577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
