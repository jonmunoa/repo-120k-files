// fichero 15873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15873;

Registro15873 crear_registro15873(int id) {
    Registro15873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
