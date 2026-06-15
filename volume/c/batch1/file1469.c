// fichero 1469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1469;

Registro1469 crear_registro1469(int id) {
    Registro1469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
