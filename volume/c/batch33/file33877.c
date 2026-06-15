// fichero 33877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33877;

Registro33877 crear_registro33877(int id) {
    Registro33877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
