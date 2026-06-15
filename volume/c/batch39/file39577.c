// fichero 39577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39577;

Registro39577 crear_registro39577(int id) {
    Registro39577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
