// fichero 21189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21189;

Registro21189 crear_registro21189(int id) {
    Registro21189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
