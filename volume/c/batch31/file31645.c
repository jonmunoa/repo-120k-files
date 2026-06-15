// fichero 31645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31645;

Registro31645 crear_registro31645(int id) {
    Registro31645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
