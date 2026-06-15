// fichero 36593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36593;

Registro36593 crear_registro36593(int id) {
    Registro36593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
