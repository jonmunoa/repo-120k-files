// fichero 48657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48657;

Registro48657 crear_registro48657(int id) {
    Registro48657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
