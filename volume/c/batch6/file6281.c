// fichero 6281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6281;

Registro6281 crear_registro6281(int id) {
    Registro6281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
