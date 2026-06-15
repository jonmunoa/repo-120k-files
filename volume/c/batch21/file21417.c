// fichero 21417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21417;

Registro21417 crear_registro21417(int id) {
    Registro21417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
