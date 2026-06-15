// fichero 24857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24857;

Registro24857 crear_registro24857(int id) {
    Registro24857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
