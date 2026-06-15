// fichero 12261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12261;

Registro12261 crear_registro12261(int id) {
    Registro12261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
