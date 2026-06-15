// fichero 16145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16145;

Registro16145 crear_registro16145(int id) {
    Registro16145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
