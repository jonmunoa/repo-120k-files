// fichero 481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro481;

Registro481 crear_registro481(int id) {
    Registro481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
