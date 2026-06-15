// fichero 41557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41557;

Registro41557 crear_registro41557(int id) {
    Registro41557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
