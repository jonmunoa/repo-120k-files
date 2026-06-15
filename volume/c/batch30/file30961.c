// fichero 30961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30961;

Registro30961 crear_registro30961(int id) {
    Registro30961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
