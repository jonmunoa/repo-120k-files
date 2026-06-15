// fichero 17197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17197;

Registro17197 crear_registro17197(int id) {
    Registro17197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
