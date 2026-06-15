// fichero 24941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24941;

Registro24941 crear_registro24941(int id) {
    Registro24941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
