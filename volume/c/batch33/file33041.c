// fichero 33041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33041;

Registro33041 crear_registro33041(int id) {
    Registro33041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
