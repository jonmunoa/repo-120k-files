// fichero 38557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38557;

Registro38557 crear_registro38557(int id) {
    Registro38557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
