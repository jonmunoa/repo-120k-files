// fichero 49965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49965;

Registro49965 crear_registro49965(int id) {
    Registro49965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
