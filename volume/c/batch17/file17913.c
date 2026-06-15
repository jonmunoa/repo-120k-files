// fichero 17913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17913;

Registro17913 crear_registro17913(int id) {
    Registro17913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
