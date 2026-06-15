// fichero 10661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10661;

Registro10661 crear_registro10661(int id) {
    Registro10661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
