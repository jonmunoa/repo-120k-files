// fichero 21621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21621;

Registro21621 crear_registro21621(int id) {
    Registro21621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
