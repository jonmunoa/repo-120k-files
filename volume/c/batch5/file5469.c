// fichero 5469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5469;

Registro5469 crear_registro5469(int id) {
    Registro5469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
