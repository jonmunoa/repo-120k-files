// fichero 26069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26069;

Registro26069 crear_registro26069(int id) {
    Registro26069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
