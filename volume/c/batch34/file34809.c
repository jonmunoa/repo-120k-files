// fichero 34809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34809;

Registro34809 crear_registro34809(int id) {
    Registro34809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
