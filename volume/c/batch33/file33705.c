// fichero 33705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33705;

Registro33705 crear_registro33705(int id) {
    Registro33705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
