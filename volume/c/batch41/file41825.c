// fichero 41825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41825;

Registro41825 crear_registro41825(int id) {
    Registro41825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
