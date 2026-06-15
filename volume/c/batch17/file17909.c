// fichero 17909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17909;

Registro17909 crear_registro17909(int id) {
    Registro17909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
