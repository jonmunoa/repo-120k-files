// fichero 12225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12225;

Registro12225 crear_registro12225(int id) {
    Registro12225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
