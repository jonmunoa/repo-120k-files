// fichero 12369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12369;

Registro12369 crear_registro12369(int id) {
    Registro12369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
