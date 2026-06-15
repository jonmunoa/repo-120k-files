// fichero 1433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1433;

Registro1433 crear_registro1433(int id) {
    Registro1433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
