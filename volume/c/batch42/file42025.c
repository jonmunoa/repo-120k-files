// fichero 42025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42025;

Registro42025 crear_registro42025(int id) {
    Registro42025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
