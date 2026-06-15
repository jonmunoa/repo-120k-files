// fichero 5953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5953;

Registro5953 crear_registro5953(int id) {
    Registro5953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
