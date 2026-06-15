// fichero 32741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32741;

Registro32741 crear_registro32741(int id) {
    Registro32741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
