// fichero 48713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48713;

Registro48713 crear_registro48713(int id) {
    Registro48713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
