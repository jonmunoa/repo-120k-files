// fichero 49369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49369;

Registro49369 crear_registro49369(int id) {
    Registro49369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
