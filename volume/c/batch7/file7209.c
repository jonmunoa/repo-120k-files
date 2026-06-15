// fichero 7209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7209;

Registro7209 crear_registro7209(int id) {
    Registro7209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
