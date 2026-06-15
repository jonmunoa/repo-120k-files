// fichero 39353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39353;

Registro39353 crear_registro39353(int id) {
    Registro39353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
