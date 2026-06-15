// fichero 20085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20085;

Registro20085 crear_registro20085(int id) {
    Registro20085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
