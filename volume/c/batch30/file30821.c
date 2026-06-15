// fichero 30821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30821;

Registro30821 crear_registro30821(int id) {
    Registro30821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
