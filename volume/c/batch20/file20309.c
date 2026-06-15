// fichero 20309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20309;

Registro20309 crear_registro20309(int id) {
    Registro20309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
