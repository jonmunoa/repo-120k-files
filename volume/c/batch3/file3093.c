// fichero 3093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3093;

Registro3093 crear_registro3093(int id) {
    Registro3093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
