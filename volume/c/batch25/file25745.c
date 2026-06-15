// fichero 25745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25745;

Registro25745 crear_registro25745(int id) {
    Registro25745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
