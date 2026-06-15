// fichero 37689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37689;

Registro37689 crear_registro37689(int id) {
    Registro37689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
