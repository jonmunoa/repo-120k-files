// fichero 8397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8397;

Registro8397 crear_registro8397(int id) {
    Registro8397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
