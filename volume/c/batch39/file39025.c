// fichero 39025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39025;

Registro39025 crear_registro39025(int id) {
    Registro39025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
