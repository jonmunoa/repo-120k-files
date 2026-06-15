// fichero 46913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46913;

Registro46913 crear_registro46913(int id) {
    Registro46913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
