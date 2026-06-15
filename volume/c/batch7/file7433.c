// fichero 7433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7433;

Registro7433 crear_registro7433(int id) {
    Registro7433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
