// fichero 34373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34373;

Registro34373 crear_registro34373(int id) {
    Registro34373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
