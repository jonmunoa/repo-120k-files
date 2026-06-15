// fichero 7601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7601;

Registro7601 crear_registro7601(int id) {
    Registro7601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
