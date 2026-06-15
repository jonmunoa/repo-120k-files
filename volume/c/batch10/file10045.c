// fichero 10045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10045;

Registro10045 crear_registro10045(int id) {
    Registro10045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
