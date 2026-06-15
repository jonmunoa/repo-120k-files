// fichero 18593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18593;

Registro18593 crear_registro18593(int id) {
    Registro18593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
