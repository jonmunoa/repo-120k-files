// fichero 23289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23289;

Registro23289 crear_registro23289(int id) {
    Registro23289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
