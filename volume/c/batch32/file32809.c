// fichero 32809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32809;

Registro32809 crear_registro32809(int id) {
    Registro32809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
