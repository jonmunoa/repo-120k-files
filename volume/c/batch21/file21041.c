// fichero 21041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21041;

Registro21041 crear_registro21041(int id) {
    Registro21041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
