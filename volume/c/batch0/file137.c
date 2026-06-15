// fichero 137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro137;

Registro137 crear_registro137(int id) {
    Registro137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
