// fichero 10381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10381;

Registro10381 crear_registro10381(int id) {
    Registro10381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
