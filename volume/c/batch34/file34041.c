// fichero 34041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34041;

Registro34041 crear_registro34041(int id) {
    Registro34041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
