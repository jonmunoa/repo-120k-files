// fichero 14397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14397;

Registro14397 crear_registro14397(int id) {
    Registro14397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
