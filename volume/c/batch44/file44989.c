// fichero 44989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44989;

Registro44989 crear_registro44989(int id) {
    Registro44989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
