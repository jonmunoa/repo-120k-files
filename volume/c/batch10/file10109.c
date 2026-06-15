// fichero 10109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10109;

Registro10109 crear_registro10109(int id) {
    Registro10109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
