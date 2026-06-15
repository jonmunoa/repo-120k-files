// fichero 21021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21021;

Registro21021 crear_registro21021(int id) {
    Registro21021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
