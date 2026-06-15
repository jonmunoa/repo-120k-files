// fichero 24557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24557;

Registro24557 crear_registro24557(int id) {
    Registro24557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
