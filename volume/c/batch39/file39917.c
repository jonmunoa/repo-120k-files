// fichero 39917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39917;

Registro39917 crear_registro39917(int id) {
    Registro39917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
