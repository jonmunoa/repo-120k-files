// fichero 5081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5081;

Registro5081 crear_registro5081(int id) {
    Registro5081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
