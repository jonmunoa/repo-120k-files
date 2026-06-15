// fichero 41945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41945;

Registro41945 crear_registro41945(int id) {
    Registro41945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
