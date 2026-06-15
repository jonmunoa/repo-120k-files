// fichero 1645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1645;

Registro1645 crear_registro1645(int id) {
    Registro1645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
