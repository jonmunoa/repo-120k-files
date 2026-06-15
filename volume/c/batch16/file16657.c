// fichero 16657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16657;

Registro16657 crear_registro16657(int id) {
    Registro16657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
