// fichero 3329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3329;

Registro3329 crear_registro3329(int id) {
    Registro3329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
