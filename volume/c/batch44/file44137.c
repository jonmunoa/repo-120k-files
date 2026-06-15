// fichero 44137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44137;

Registro44137 crear_registro44137(int id) {
    Registro44137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
