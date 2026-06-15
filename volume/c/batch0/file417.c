// fichero 417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro417;

Registro417 crear_registro417(int id) {
    Registro417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
