// fichero 49313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49313;

Registro49313 crear_registro49313(int id) {
    Registro49313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
