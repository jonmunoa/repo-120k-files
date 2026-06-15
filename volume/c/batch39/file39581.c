// fichero 39581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39581;

Registro39581 crear_registro39581(int id) {
    Registro39581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
