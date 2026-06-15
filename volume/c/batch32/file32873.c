// fichero 32873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32873;

Registro32873 crear_registro32873(int id) {
    Registro32873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
