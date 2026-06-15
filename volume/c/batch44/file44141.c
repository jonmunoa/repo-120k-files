// fichero 44141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44141;

Registro44141 crear_registro44141(int id) {
    Registro44141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
