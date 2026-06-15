// fichero 49013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49013;

Registro49013 crear_registro49013(int id) {
    Registro49013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
