// fichero 49729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49729;

Registro49729 crear_registro49729(int id) {
    Registro49729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
