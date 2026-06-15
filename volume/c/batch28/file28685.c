// fichero 28685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28685;

Registro28685 crear_registro28685(int id) {
    Registro28685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
