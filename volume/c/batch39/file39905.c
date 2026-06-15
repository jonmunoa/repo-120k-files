// fichero 39905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39905;

Registro39905 crear_registro39905(int id) {
    Registro39905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
