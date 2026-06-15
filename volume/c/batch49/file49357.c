// fichero 49357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49357;

Registro49357 crear_registro49357(int id) {
    Registro49357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
