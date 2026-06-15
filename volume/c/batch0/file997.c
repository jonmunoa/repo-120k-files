// fichero 997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro997;

Registro997 crear_registro997(int id) {
    Registro997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
