// fichero 21605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21605;

Registro21605 crear_registro21605(int id) {
    Registro21605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
