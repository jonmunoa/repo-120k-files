// fichero 44241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44241;

Registro44241 crear_registro44241(int id) {
    Registro44241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
