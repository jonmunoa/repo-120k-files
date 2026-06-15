// fichero 26025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26025;

Registro26025 crear_registro26025(int id) {
    Registro26025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
