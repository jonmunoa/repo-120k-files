// fichero 1661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1661;

Registro1661 crear_registro1661(int id) {
    Registro1661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
