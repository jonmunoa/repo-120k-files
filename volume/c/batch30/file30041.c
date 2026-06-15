// fichero 30041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30041;

Registro30041 crear_registro30041(int id) {
    Registro30041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
