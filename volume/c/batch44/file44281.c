// fichero 44281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44281;

Registro44281 crear_registro44281(int id) {
    Registro44281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
