// fichero 20661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20661;

Registro20661 crear_registro20661(int id) {
    Registro20661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
