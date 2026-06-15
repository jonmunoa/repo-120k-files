// fichero 48577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48577;

Registro48577 crear_registro48577(int id) {
    Registro48577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
