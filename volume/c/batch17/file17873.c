// fichero 17873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17873;

Registro17873 crear_registro17873(int id) {
    Registro17873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
