// fichero 1497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1497;

Registro1497 crear_registro1497(int id) {
    Registro1497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
