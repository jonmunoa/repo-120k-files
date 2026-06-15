// fichero 4309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4309;

Registro4309 crear_registro4309(int id) {
    Registro4309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
