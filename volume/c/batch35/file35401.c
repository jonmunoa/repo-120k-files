// fichero 35401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35401;

Registro35401 crear_registro35401(int id) {
    Registro35401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
