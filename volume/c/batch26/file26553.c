// fichero 26553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26553;

Registro26553 crear_registro26553(int id) {
    Registro26553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
