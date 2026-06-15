// fichero 41733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41733;

Registro41733 crear_registro41733(int id) {
    Registro41733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
