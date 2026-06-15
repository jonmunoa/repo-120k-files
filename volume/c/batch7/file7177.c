// fichero 7177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7177;

Registro7177 crear_registro7177(int id) {
    Registro7177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
