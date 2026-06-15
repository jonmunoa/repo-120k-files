// fichero 21045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21045;

Registro21045 crear_registro21045(int id) {
    Registro21045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
