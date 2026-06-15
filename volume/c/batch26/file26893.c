// fichero 26893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26893;

Registro26893 crear_registro26893(int id) {
    Registro26893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
