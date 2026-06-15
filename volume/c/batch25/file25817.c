// fichero 25817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25817;

Registro25817 crear_registro25817(int id) {
    Registro25817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
