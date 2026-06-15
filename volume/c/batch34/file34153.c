// fichero 34153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34153;

Registro34153 crear_registro34153(int id) {
    Registro34153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
