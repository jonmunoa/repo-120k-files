// fichero 40341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40341;

Registro40341 crear_registro40341(int id) {
    Registro40341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
