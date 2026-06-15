// fichero 49105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49105;

Registro49105 crear_registro49105(int id) {
    Registro49105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
