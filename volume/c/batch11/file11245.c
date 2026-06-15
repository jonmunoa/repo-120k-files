// fichero 11245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11245;

Registro11245 crear_registro11245(int id) {
    Registro11245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
