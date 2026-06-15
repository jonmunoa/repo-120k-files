// fichero 26037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26037;

Registro26037 crear_registro26037(int id) {
    Registro26037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
