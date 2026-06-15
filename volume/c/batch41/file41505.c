// fichero 41505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41505;

Registro41505 crear_registro41505(int id) {
    Registro41505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
