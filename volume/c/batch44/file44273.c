// fichero 44273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44273;

Registro44273 crear_registro44273(int id) {
    Registro44273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
