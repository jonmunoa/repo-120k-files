// fichero 14769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14769;

Registro14769 crear_registro14769(int id) {
    Registro14769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
