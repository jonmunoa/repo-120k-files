// fichero 31417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31417;

Registro31417 crear_registro31417(int id) {
    Registro31417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
