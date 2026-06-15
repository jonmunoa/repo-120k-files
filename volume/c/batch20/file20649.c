// fichero 20649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20649;

Registro20649 crear_registro20649(int id) {
    Registro20649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
