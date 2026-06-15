// fichero 47609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47609;

Registro47609 crear_registro47609(int id) {
    Registro47609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
