// fichero 26021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26021;

Registro26021 crear_registro26021(int id) {
    Registro26021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
