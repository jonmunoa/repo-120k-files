// fichero 21945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21945;

Registro21945 crear_registro21945(int id) {
    Registro21945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
