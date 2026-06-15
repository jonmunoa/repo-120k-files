// fichero 22417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22417;

Registro22417 crear_registro22417(int id) {
    Registro22417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
