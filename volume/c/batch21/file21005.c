// fichero 21005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21005;

Registro21005 crear_registro21005(int id) {
    Registro21005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
