// fichero 35317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35317;

Registro35317 crear_registro35317(int id) {
    Registro35317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
