// fichero 24317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24317;

Registro24317 crear_registro24317(int id) {
    Registro24317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
