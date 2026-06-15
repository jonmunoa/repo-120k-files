// fichero 19789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19789;

Registro19789 crear_registro19789(int id) {
    Registro19789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
