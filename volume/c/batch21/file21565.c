// fichero 21565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21565;

Registro21565 crear_registro21565(int id) {
    Registro21565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
