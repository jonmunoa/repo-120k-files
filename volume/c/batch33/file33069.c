// fichero 33069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33069;

Registro33069 crear_registro33069(int id) {
    Registro33069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
