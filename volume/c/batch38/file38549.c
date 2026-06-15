// fichero 38549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38549;

Registro38549 crear_registro38549(int id) {
    Registro38549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
