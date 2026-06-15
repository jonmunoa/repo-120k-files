// fichero 30785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30785;

Registro30785 crear_registro30785(int id) {
    Registro30785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
