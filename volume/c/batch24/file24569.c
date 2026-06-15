// fichero 24569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24569;

Registro24569 crear_registro24569(int id) {
    Registro24569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
