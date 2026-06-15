// fichero 49189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49189;

Registro49189 crear_registro49189(int id) {
    Registro49189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
