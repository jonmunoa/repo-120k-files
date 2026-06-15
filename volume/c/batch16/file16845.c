// fichero 16845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16845;

Registro16845 crear_registro16845(int id) {
    Registro16845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
