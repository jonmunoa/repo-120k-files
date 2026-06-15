// fichero 29485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29485;

Registro29485 crear_registro29485(int id) {
    Registro29485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
