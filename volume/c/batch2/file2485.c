// fichero 2485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2485;

Registro2485 crear_registro2485(int id) {
    Registro2485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
