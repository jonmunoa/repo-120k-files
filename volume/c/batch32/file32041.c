// fichero 32041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32041;

Registro32041 crear_registro32041(int id) {
    Registro32041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
