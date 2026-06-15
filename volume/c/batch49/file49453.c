// fichero 49453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49453;

Registro49453 crear_registro49453(int id) {
    Registro49453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
