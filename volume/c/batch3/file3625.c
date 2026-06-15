// fichero 3625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3625;

Registro3625 crear_registro3625(int id) {
    Registro3625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
