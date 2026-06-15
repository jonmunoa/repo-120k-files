// fichero 39849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39849;

Registro39849 crear_registro39849(int id) {
    Registro39849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
