// fichero 6601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6601;

Registro6601 crear_registro6601(int id) {
    Registro6601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
