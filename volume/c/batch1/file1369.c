// fichero 1369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1369;

Registro1369 crear_registro1369(int id) {
    Registro1369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
