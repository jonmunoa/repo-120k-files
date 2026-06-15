// fichero 38317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38317;

Registro38317 crear_registro38317(int id) {
    Registro38317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
