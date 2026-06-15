// fichero 20145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20145;

Registro20145 crear_registro20145(int id) {
    Registro20145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
