// fichero 49917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49917;

Registro49917 crear_registro49917(int id) {
    Registro49917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
