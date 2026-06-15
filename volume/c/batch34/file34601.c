// fichero 34601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34601;

Registro34601 crear_registro34601(int id) {
    Registro34601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
