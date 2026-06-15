// fichero 21169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21169;

Registro21169 crear_registro21169(int id) {
    Registro21169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
