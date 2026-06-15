// fichero 44173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44173;

Registro44173 crear_registro44173(int id) {
    Registro44173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
