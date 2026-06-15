// fichero 47477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47477;

Registro47477 crear_registro47477(int id) {
    Registro47477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
