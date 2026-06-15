// fichero 35969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35969;

Registro35969 crear_registro35969(int id) {
    Registro35969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
