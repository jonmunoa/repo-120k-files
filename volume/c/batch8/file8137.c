// fichero 8137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8137;

Registro8137 crear_registro8137(int id) {
    Registro8137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
