// fichero 47085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47085;

Registro47085 crear_registro47085(int id) {
    Registro47085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
