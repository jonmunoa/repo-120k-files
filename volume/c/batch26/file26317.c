// fichero 26317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26317;

Registro26317 crear_registro26317(int id) {
    Registro26317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
