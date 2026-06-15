// fichero 44325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44325;

Registro44325 crear_registro44325(int id) {
    Registro44325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
