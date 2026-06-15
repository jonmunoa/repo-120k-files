// fichero 44433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44433;

Registro44433 crear_registro44433(int id) {
    Registro44433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
