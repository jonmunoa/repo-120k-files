// fichero 39249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39249;

Registro39249 crear_registro39249(int id) {
    Registro39249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
