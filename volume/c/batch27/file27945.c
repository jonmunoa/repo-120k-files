// fichero 27945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27945;

Registro27945 crear_registro27945(int id) {
    Registro27945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
