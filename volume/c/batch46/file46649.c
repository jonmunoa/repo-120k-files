// fichero 46649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46649;

Registro46649 crear_registro46649(int id) {
    Registro46649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
