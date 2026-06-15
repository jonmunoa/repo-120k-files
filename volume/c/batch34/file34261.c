// fichero 34261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34261;

Registro34261 crear_registro34261(int id) {
    Registro34261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
