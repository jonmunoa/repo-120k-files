// fichero 21485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21485;

Registro21485 crear_registro21485(int id) {
    Registro21485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
