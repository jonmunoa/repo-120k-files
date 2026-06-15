// fichero 1465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1465;

Registro1465 crear_registro1465(int id) {
    Registro1465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
