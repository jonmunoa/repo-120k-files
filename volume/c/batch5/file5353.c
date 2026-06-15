// fichero 5353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5353;

Registro5353 crear_registro5353(int id) {
    Registro5353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
