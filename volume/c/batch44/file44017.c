// fichero 44017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44017;

Registro44017 crear_registro44017(int id) {
    Registro44017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
