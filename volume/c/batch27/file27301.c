// fichero 27301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27301;

Registro27301 crear_registro27301(int id) {
    Registro27301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
