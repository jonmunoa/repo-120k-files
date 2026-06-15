// fichero 39497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39497;

Registro39497 crear_registro39497(int id) {
    Registro39497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
