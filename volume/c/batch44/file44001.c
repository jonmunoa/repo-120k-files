// fichero 44001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44001;

Registro44001 crear_registro44001(int id) {
    Registro44001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
