// fichero 20469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20469;

Registro20469 crear_registro20469(int id) {
    Registro20469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
