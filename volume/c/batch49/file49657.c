// fichero 49657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49657;

Registro49657 crear_registro49657(int id) {
    Registro49657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
