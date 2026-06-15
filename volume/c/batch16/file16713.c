// fichero 16713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16713;

Registro16713 crear_registro16713(int id) {
    Registro16713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
