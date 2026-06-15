// fichero 2041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2041;

Registro2041 crear_registro2041(int id) {
    Registro2041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
