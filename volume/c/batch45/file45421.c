// fichero 45421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45421;

Registro45421 crear_registro45421(int id) {
    Registro45421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
