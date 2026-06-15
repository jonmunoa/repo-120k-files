// fichero 24325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24325;

Registro24325 crear_registro24325(int id) {
    Registro24325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
