// fichero 41885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41885;

Registro41885 crear_registro41885(int id) {
    Registro41885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
