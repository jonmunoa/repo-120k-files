// fichero 38505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38505;

Registro38505 crear_registro38505(int id) {
    Registro38505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
