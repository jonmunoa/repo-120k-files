// fichero 49417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49417;

Registro49417 crear_registro49417(int id) {
    Registro49417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
