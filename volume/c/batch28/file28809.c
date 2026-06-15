// fichero 28809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28809;

Registro28809 crear_registro28809(int id) {
    Registro28809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
