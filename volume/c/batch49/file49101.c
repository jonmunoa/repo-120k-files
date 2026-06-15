// fichero 49101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49101;

Registro49101 crear_registro49101(int id) {
    Registro49101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
