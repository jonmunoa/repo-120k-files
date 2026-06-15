// fichero 43737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43737;

Registro43737 crear_registro43737(int id) {
    Registro43737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
