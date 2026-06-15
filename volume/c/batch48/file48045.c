// fichero 48045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48045;

Registro48045 crear_registro48045(int id) {
    Registro48045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
