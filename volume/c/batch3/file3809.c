// fichero 3809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3809;

Registro3809 crear_registro3809(int id) {
    Registro3809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
