// fichero 3209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3209;

Registro3209 crear_registro3209(int id) {
    Registro3209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
