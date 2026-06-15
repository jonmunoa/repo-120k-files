// fichero 46877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46877;

Registro46877 crear_registro46877(int id) {
    Registro46877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
