// fichero 1517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1517;

Registro1517 crear_registro1517(int id) {
    Registro1517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
