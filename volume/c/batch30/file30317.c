// fichero 30317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30317;

Registro30317 crear_registro30317(int id) {
    Registro30317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
