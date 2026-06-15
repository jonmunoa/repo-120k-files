// fichero 16565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16565;

Registro16565 crear_registro16565(int id) {
    Registro16565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
