// fichero 49933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49933;

Registro49933 crear_registro49933(int id) {
    Registro49933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
