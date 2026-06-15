// fichero 12401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12401;

Registro12401 crear_registro12401(int id) {
    Registro12401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
