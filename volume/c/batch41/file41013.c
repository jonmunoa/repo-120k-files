// fichero 41013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41013;

Registro41013 crear_registro41013(int id) {
    Registro41013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
