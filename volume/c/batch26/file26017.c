// fichero 26017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26017;

Registro26017 crear_registro26017(int id) {
    Registro26017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
