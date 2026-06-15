// fichero 5937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5937;

Registro5937 crear_registro5937(int id) {
    Registro5937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
