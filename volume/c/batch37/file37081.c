// fichero 37081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37081;

Registro37081 crear_registro37081(int id) {
    Registro37081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
