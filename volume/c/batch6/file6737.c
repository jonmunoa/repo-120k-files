// fichero 6737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6737;

Registro6737 crear_registro6737(int id) {
    Registro6737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
