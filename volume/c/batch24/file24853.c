// fichero 24853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24853;

Registro24853 crear_registro24853(int id) {
    Registro24853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
