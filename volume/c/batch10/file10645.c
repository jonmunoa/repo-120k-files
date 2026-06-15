// fichero 10645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10645;

Registro10645 crear_registro10645(int id) {
    Registro10645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
