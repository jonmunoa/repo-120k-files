// fichero 35013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35013;

Registro35013 crear_registro35013(int id) {
    Registro35013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
