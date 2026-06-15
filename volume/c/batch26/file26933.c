// fichero 26933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26933;

Registro26933 crear_registro26933(int id) {
    Registro26933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
