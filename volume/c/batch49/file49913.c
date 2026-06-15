// fichero 49913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49913;

Registro49913 crear_registro49913(int id) {
    Registro49913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
