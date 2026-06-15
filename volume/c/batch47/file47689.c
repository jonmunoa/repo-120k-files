// fichero 47689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47689;

Registro47689 crear_registro47689(int id) {
    Registro47689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
