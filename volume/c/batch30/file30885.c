// fichero 30885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30885;

Registro30885 crear_registro30885(int id) {
    Registro30885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
