// fichero 24813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24813;

Registro24813 crear_registro24813(int id) {
    Registro24813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
