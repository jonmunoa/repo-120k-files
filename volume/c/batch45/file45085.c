// fichero 45085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45085;

Registro45085 crear_registro45085(int id) {
    Registro45085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
