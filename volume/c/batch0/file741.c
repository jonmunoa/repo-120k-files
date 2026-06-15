// fichero 741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro741;

Registro741 crear_registro741(int id) {
    Registro741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
