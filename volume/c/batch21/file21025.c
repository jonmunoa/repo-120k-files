// fichero 21025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21025;

Registro21025 crear_registro21025(int id) {
    Registro21025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
