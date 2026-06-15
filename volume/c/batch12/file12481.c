// fichero 12481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12481;

Registro12481 crear_registro12481(int id) {
    Registro12481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
