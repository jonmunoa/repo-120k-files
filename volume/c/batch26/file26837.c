// fichero 26837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26837;

Registro26837 crear_registro26837(int id) {
    Registro26837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
