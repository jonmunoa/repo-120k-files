// fichero 24301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24301;

Registro24301 crear_registro24301(int id) {
    Registro24301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
