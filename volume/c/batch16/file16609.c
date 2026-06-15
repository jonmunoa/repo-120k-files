// fichero 16609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16609;

Registro16609 crear_registro16609(int id) {
    Registro16609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
