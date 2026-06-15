// fichero 44709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44709;

Registro44709 crear_registro44709(int id) {
    Registro44709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
