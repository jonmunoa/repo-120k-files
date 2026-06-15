// fichero 22977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22977;

Registro22977 crear_registro22977(int id) {
    Registro22977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
