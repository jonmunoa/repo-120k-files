// fichero 14741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14741;

Registro14741 crear_registro14741(int id) {
    Registro14741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
