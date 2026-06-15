// fichero 17265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17265;

Registro17265 crear_registro17265(int id) {
    Registro17265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
