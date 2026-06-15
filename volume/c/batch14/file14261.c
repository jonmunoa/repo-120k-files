// fichero 14261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14261;

Registro14261 crear_registro14261(int id) {
    Registro14261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
