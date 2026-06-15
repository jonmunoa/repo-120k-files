// fichero 12665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12665;

Registro12665 crear_registro12665(int id) {
    Registro12665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
