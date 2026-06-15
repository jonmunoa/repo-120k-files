// fichero 27325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27325;

Registro27325 crear_registro27325(int id) {
    Registro27325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
