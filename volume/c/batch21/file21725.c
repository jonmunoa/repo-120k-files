// fichero 21725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21725;

Registro21725 crear_registro21725(int id) {
    Registro21725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
