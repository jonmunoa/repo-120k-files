// fichero 1577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1577;

Registro1577 crear_registro1577(int id) {
    Registro1577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
