// fichero 6417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6417;

Registro6417 crear_registro6417(int id) {
    Registro6417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
