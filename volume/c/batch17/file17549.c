// fichero 17549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17549;

Registro17549 crear_registro17549(int id) {
    Registro17549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
