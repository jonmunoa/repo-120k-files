// fichero 39209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39209;

Registro39209 crear_registro39209(int id) {
    Registro39209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
