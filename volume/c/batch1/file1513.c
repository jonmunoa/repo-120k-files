// fichero 1513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1513;

Registro1513 crear_registro1513(int id) {
    Registro1513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
