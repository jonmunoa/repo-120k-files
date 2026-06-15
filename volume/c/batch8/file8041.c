// fichero 8041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8041;

Registro8041 crear_registro8041(int id) {
    Registro8041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
