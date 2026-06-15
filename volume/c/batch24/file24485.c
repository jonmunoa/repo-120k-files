// fichero 24485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24485;

Registro24485 crear_registro24485(int id) {
    Registro24485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
