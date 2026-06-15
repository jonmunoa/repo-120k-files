// fichero 845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro845;

Registro845 crear_registro845(int id) {
    Registro845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
