// fichero 49345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49345;

Registro49345 crear_registro49345(int id) {
    Registro49345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
