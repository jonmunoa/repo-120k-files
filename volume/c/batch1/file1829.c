// fichero 1829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1829;

Registro1829 crear_registro1829(int id) {
    Registro1829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
