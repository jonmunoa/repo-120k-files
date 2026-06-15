// fichero 1689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1689;

Registro1689 crear_registro1689(int id) {
    Registro1689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
