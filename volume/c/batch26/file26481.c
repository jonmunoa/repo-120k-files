// fichero 26481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26481;

Registro26481 crear_registro26481(int id) {
    Registro26481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
