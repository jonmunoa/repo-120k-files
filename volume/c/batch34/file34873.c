// fichero 34873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34873;

Registro34873 crear_registro34873(int id) {
    Registro34873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
