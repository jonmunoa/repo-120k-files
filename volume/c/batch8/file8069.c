// fichero 8069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8069;

Registro8069 crear_registro8069(int id) {
    Registro8069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
