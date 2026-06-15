// fichero 1333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1333;

Registro1333 crear_registro1333(int id) {
    Registro1333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
