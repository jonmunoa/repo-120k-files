// fichero 12585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12585;

Registro12585 crear_registro12585(int id) {
    Registro12585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
