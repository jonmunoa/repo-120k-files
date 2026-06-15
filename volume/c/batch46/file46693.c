// fichero 46693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46693;

Registro46693 crear_registro46693(int id) {
    Registro46693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
