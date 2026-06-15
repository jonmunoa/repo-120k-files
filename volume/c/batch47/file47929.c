// fichero 47929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47929;

Registro47929 crear_registro47929(int id) {
    Registro47929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
