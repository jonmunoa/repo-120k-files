// fichero 35397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35397;

Registro35397 crear_registro35397(int id) {
    Registro35397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
