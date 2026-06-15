// fichero 49025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49025;

Registro49025 crear_registro49025(int id) {
    Registro49025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
