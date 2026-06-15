// fichero 49121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49121;

Registro49121 crear_registro49121(int id) {
    Registro49121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
