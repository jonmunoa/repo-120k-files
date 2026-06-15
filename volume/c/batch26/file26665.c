// fichero 26665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26665;

Registro26665 crear_registro26665(int id) {
    Registro26665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
