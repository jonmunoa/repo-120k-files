// fichero 14041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14041;

Registro14041 crear_registro14041(int id) {
    Registro14041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
