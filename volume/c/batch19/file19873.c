// fichero 19873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19873;

Registro19873 crear_registro19873(int id) {
    Registro19873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
