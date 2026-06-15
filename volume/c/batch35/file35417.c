// fichero 35417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35417;

Registro35417 crear_registro35417(int id) {
    Registro35417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
