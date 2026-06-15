// fichero 48041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48041;

Registro48041 crear_registro48041(int id) {
    Registro48041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
