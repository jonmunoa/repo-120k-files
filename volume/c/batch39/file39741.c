// fichero 39741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39741;

Registro39741 crear_registro39741(int id) {
    Registro39741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
