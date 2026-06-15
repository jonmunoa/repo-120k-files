// fichero 7069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7069;

Registro7069 crear_registro7069(int id) {
    Registro7069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
