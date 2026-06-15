// fichero 8485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8485;

Registro8485 crear_registro8485(int id) {
    Registro8485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
