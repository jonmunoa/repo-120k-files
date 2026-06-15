// fichero 1801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1801;

Registro1801 crear_registro1801(int id) {
    Registro1801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
