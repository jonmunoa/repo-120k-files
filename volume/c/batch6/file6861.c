// fichero 6861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6861;

Registro6861 crear_registro6861(int id) {
    Registro6861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
