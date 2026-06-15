// fichero 19101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19101;

Registro19101 crear_registro19101(int id) {
    Registro19101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
