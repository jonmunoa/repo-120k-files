// fichero 44689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44689;

Registro44689 crear_registro44689(int id) {
    Registro44689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
