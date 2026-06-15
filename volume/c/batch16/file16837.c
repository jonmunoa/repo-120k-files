// fichero 16837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16837;

Registro16837 crear_registro16837(int id) {
    Registro16837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
