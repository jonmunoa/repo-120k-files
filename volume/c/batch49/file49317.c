// fichero 49317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49317;

Registro49317 crear_registro49317(int id) {
    Registro49317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
