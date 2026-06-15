// fichero 29265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29265;

Registro29265 crear_registro29265(int id) {
    Registro29265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
