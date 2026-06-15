// fichero 21809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21809;

Registro21809 crear_registro21809(int id) {
    Registro21809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
