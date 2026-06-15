// fichero 29529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29529;

Registro29529 crear_registro29529(int id) {
    Registro29529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
