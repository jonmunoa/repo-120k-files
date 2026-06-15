// fichero 44385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44385;

Registro44385 crear_registro44385(int id) {
    Registro44385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
