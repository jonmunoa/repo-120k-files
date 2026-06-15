// fichero 44105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44105;

Registro44105 crear_registro44105(int id) {
    Registro44105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
