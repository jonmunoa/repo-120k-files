// fichero 1621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1621;

Registro1621 crear_registro1621(int id) {
    Registro1621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
