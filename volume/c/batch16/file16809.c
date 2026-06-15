// fichero 16809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16809;

Registro16809 crear_registro16809(int id) {
    Registro16809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
