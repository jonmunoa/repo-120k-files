// fichero 26629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26629;

Registro26629 crear_registro26629(int id) {
    Registro26629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
