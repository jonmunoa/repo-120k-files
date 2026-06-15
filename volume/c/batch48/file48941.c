// fichero 48941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48941;

Registro48941 crear_registro48941(int id) {
    Registro48941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
