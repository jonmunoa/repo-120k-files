// fichero 6241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6241;

Registro6241 crear_registro6241(int id) {
    Registro6241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
