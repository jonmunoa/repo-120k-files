// fichero 3873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3873;

Registro3873 crear_registro3873(int id) {
    Registro3873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
