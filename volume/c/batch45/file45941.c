// fichero 45941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45941;

Registro45941 crear_registro45941(int id) {
    Registro45941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
