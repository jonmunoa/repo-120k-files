// fichero 937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro937;

Registro937 crear_registro937(int id) {
    Registro937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
