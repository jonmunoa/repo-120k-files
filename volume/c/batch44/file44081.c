// fichero 44081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44081;

Registro44081 crear_registro44081(int id) {
    Registro44081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
