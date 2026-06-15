// fichero 45965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45965;

Registro45965 crear_registro45965(int id) {
    Registro45965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
