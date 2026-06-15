// fichero 17809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17809;

Registro17809 crear_registro17809(int id) {
    Registro17809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
