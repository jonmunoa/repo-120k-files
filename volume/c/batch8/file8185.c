// fichero 8185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8185;

Registro8185 crear_registro8185(int id) {
    Registro8185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
