// fichero 49209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49209;

Registro49209 crear_registro49209(int id) {
    Registro49209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
