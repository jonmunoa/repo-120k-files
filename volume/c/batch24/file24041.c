// fichero 24041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24041;

Registro24041 crear_registro24041(int id) {
    Registro24041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
