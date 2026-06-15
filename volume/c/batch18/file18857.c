// fichero 18857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18857;

Registro18857 crear_registro18857(int id) {
    Registro18857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
