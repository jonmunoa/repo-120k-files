// fichero 27901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27901;

Registro27901 crear_registro27901(int id) {
    Registro27901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
