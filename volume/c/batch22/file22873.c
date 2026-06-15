// fichero 22873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22873;

Registro22873 crear_registro22873(int id) {
    Registro22873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
