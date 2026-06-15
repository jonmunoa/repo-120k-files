// fichero 43085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43085;

Registro43085 crear_registro43085(int id) {
    Registro43085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
