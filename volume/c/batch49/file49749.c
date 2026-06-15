// fichero 49749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49749;

Registro49749 crear_registro49749(int id) {
    Registro49749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
