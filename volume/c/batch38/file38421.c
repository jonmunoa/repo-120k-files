// fichero 38421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38421;

Registro38421 crear_registro38421(int id) {
    Registro38421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
