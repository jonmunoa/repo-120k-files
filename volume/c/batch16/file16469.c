// fichero 16469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16469;

Registro16469 crear_registro16469(int id) {
    Registro16469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
