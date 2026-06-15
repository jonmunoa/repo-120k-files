// fichero 27989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27989;

Registro27989 crear_registro27989(int id) {
    Registro27989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
