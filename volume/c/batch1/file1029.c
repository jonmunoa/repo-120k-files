// fichero 1029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1029;

Registro1029 crear_registro1029(int id) {
    Registro1029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
