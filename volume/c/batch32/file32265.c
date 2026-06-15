// fichero 32265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32265;

Registro32265 crear_registro32265(int id) {
    Registro32265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
