// fichero 21081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21081;

Registro21081 crear_registro21081(int id) {
    Registro21081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
