// fichero 44221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44221;

Registro44221 crear_registro44221(int id) {
    Registro44221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
