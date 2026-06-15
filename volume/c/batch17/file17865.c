// fichero 17865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17865;

Registro17865 crear_registro17865(int id) {
    Registro17865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
