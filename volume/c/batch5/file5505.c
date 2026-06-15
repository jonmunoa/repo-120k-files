// fichero 5505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5505;

Registro5505 crear_registro5505(int id) {
    Registro5505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
