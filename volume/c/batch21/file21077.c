// fichero 21077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21077;

Registro21077 crear_registro21077(int id) {
    Registro21077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
