// fichero 33741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33741;

Registro33741 crear_registro33741(int id) {
    Registro33741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
