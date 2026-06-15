// fichero 673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro673;

Registro673 crear_registro673(int id) {
    Registro673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
