// fichero 24069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24069;

Registro24069 crear_registro24069(int id) {
    Registro24069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
