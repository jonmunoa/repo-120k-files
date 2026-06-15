// fichero 37945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37945;

Registro37945 crear_registro37945(int id) {
    Registro37945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
