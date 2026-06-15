// fichero 34453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34453;

Registro34453 crear_registro34453(int id) {
    Registro34453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
