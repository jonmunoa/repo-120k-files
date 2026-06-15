// fichero 37873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37873;

Registro37873 crear_registro37873(int id) {
    Registro37873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
