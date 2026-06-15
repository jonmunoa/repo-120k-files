// fichero 46741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46741;

Registro46741 crear_registro46741(int id) {
    Registro46741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
