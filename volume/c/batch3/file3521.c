// fichero 3521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3521;

Registro3521 crear_registro3521(int id) {
    Registro3521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
