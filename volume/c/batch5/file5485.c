// fichero 5485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5485;

Registro5485 crear_registro5485(int id) {
    Registro5485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
