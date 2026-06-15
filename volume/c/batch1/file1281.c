// fichero 1281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1281;

Registro1281 crear_registro1281(int id) {
    Registro1281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
