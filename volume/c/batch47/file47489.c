// fichero 47489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47489;

Registro47489 crear_registro47489(int id) {
    Registro47489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
