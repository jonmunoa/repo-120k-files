// fichero 4849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4849;

Registro4849 crear_registro4849(int id) {
    Registro4849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
