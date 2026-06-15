// fichero 12973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12973;

Registro12973 crear_registro12973(int id) {
    Registro12973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
