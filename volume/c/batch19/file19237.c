// fichero 19237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19237;

Registro19237 crear_registro19237(int id) {
    Registro19237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
