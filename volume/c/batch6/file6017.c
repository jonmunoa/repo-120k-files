// fichero 6017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6017;

Registro6017 crear_registro6017(int id) {
    Registro6017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
