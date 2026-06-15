// fichero 10797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10797;

Registro10797 crear_registro10797(int id) {
    Registro10797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
