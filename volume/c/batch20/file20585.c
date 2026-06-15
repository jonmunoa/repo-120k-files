// fichero 20585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20585;

Registro20585 crear_registro20585(int id) {
    Registro20585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
