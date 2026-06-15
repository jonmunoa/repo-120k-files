// fichero 44593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44593;

Registro44593 crear_registro44593(int id) {
    Registro44593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
