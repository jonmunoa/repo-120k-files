// fichero 41665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41665;

Registro41665 crear_registro41665(int id) {
    Registro41665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
