// fichero 32025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32025;

Registro32025 crear_registro32025(int id) {
    Registro32025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
