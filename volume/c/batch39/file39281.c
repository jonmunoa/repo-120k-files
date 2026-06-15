// fichero 39281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39281;

Registro39281 crear_registro39281(int id) {
    Registro39281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
