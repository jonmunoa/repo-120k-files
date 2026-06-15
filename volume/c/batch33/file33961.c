// fichero 33961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33961;

Registro33961 crear_registro33961(int id) {
    Registro33961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
