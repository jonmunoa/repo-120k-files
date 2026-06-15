// fichero 44057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44057;

Registro44057 crear_registro44057(int id) {
    Registro44057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
