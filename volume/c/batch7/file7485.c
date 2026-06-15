// fichero 7485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7485;

Registro7485 crear_registro7485(int id) {
    Registro7485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
