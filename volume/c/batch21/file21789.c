// fichero 21789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21789;

Registro21789 crear_registro21789(int id) {
    Registro21789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
