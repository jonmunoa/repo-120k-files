// fichero 48997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48997;

Registro48997 crear_registro48997(int id) {
    Registro48997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
