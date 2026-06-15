// fichero 10293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10293;

Registro10293 crear_registro10293(int id) {
    Registro10293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
