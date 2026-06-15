// fichero 21741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21741;

Registro21741 crear_registro21741(int id) {
    Registro21741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
