// fichero 3037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3037;

Registro3037 crear_registro3037(int id) {
    Registro3037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
