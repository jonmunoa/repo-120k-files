// fichero 24821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24821;

Registro24821 crear_registro24821(int id) {
    Registro24821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
