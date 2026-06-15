// fichero 20485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20485;

Registro20485 crear_registro20485(int id) {
    Registro20485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
