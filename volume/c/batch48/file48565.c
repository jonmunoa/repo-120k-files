// fichero 48565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48565;

Registro48565 crear_registro48565(int id) {
    Registro48565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
