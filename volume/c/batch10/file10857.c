// fichero 10857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10857;

Registro10857 crear_registro10857(int id) {
    Registro10857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
