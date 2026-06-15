// fichero 2025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2025;

Registro2025 crear_registro2025(int id) {
    Registro2025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
