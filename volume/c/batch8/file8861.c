// fichero 8861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8861;

Registro8861 crear_registro8861(int id) {
    Registro8861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
