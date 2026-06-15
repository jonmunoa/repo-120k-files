// fichero 9605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9605;

Registro9605 crear_registro9605(int id) {
    Registro9605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
