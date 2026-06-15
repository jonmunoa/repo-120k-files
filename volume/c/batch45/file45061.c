// fichero 45061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45061;

Registro45061 crear_registro45061(int id) {
    Registro45061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
