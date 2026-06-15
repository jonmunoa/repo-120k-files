// fichero 20889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20889;

Registro20889 crear_registro20889(int id) {
    Registro20889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
