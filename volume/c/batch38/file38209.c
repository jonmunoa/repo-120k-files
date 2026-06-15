// fichero 38209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38209;

Registro38209 crear_registro38209(int id) {
    Registro38209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
