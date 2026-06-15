// fichero 21977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21977;

Registro21977 crear_registro21977(int id) {
    Registro21977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
