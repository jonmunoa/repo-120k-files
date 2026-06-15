// fichero 1505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1505;

Registro1505 crear_registro1505(int id) {
    Registro1505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
