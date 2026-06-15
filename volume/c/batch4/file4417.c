// fichero 4417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4417;

Registro4417 crear_registro4417(int id) {
    Registro4417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
