// fichero 3453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3453;

Registro3453 crear_registro3453(int id) {
    Registro3453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
