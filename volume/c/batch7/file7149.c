// fichero 7149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7149;

Registro7149 crear_registro7149(int id) {
    Registro7149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
