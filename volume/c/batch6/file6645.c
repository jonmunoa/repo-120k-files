// fichero 6645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6645;

Registro6645 crear_registro6645(int id) {
    Registro6645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
