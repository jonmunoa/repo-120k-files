// fichero 36373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36373;

Registro36373 crear_registro36373(int id) {
    Registro36373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
