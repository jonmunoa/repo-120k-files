// fichero 42485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42485;

Registro42485 crear_registro42485(int id) {
    Registro42485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
