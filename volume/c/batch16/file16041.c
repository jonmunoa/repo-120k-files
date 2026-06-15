// fichero 16041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16041;

Registro16041 crear_registro16041(int id) {
    Registro16041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
