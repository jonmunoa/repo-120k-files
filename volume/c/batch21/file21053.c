// fichero 21053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21053;

Registro21053 crear_registro21053(int id) {
    Registro21053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
