// fichero 39093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39093;

Registro39093 crear_registro39093(int id) {
    Registro39093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
