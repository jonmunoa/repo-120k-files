// fichero 4865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4865;

Registro4865 crear_registro4865(int id) {
    Registro4865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
