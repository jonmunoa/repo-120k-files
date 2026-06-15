// fichero 38697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38697;

Registro38697 crear_registro38697(int id) {
    Registro38697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
