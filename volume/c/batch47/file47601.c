// fichero 47601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47601;

Registro47601 crear_registro47601(int id) {
    Registro47601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
