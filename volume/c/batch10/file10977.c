// fichero 10977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10977;

Registro10977 crear_registro10977(int id) {
    Registro10977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
