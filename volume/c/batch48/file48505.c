// fichero 48505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48505;

Registro48505 crear_registro48505(int id) {
    Registro48505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
