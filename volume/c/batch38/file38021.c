// fichero 38021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38021;

Registro38021 crear_registro38021(int id) {
    Registro38021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
