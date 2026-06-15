// fichero 48809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48809;

Registro48809 crear_registro48809(int id) {
    Registro48809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
