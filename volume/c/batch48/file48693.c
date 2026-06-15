// fichero 48693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48693;

Registro48693 crear_registro48693(int id) {
    Registro48693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
