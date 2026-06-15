// fichero 21301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21301;

Registro21301 crear_registro21301(int id) {
    Registro21301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
