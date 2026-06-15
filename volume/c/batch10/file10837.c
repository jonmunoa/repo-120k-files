// fichero 10837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10837;

Registro10837 crear_registro10837(int id) {
    Registro10837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
