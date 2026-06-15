// fichero 841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro841;

Registro841 crear_registro841(int id) {
    Registro841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
