// fichero 41481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41481;

Registro41481 crear_registro41481(int id) {
    Registro41481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
