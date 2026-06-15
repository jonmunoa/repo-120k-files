// fichero 49865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49865;

Registro49865 crear_registro49865(int id) {
    Registro49865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
