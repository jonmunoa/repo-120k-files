// fichero 17041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17041;

Registro17041 crear_registro17041(int id) {
    Registro17041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
