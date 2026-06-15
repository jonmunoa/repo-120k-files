// fichero 31293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31293;

Registro31293 crear_registro31293(int id) {
    Registro31293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
