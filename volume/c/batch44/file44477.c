// fichero 44477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44477;

Registro44477 crear_registro44477(int id) {
    Registro44477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
