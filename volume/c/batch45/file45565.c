// fichero 45565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45565;

Registro45565 crear_registro45565(int id) {
    Registro45565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
