// fichero 49085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49085;

Registro49085 crear_registro49085(int id) {
    Registro49085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
