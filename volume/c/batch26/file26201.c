// fichero 26201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26201;

Registro26201 crear_registro26201(int id) {
    Registro26201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
