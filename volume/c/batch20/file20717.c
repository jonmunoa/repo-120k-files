// fichero 20717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20717;

Registro20717 crear_registro20717(int id) {
    Registro20717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
