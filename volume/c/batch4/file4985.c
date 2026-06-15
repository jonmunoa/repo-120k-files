// fichero 4985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4985;

Registro4985 crear_registro4985(int id) {
    Registro4985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
