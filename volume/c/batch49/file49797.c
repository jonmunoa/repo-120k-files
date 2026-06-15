// fichero 49797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49797;

Registro49797 crear_registro49797(int id) {
    Registro49797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
