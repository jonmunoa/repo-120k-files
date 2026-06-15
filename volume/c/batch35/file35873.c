// fichero 35873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35873;

Registro35873 crear_registro35873(int id) {
    Registro35873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
