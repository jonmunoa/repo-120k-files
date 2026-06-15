// fichero 25873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25873;

Registro25873 crear_registro25873(int id) {
    Registro25873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
