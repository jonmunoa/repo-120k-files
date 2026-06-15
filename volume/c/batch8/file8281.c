// fichero 8281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8281;

Registro8281 crear_registro8281(int id) {
    Registro8281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
