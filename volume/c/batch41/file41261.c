// fichero 41261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41261;

Registro41261 crear_registro41261(int id) {
    Registro41261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
