// fichero 8217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8217;

Registro8217 crear_registro8217(int id) {
    Registro8217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
