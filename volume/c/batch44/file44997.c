// fichero 44997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44997;

Registro44997 crear_registro44997(int id) {
    Registro44997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
