// fichero 10097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10097;

Registro10097 crear_registro10097(int id) {
    Registro10097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
