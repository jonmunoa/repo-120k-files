// fichero 21885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21885;

Registro21885 crear_registro21885(int id) {
    Registro21885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
