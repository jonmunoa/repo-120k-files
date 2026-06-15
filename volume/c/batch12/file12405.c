// fichero 12405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12405;

Registro12405 crear_registro12405(int id) {
    Registro12405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
