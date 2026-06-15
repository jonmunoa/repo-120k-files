// fichero 38957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38957;

Registro38957 crear_registro38957(int id) {
    Registro38957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
