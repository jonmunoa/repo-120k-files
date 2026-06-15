// fichero 43941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43941;

Registro43941 crear_registro43941(int id) {
    Registro43941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
