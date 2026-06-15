// fichero 49005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49005;

Registro49005 crear_registro49005(int id) {
    Registro49005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
