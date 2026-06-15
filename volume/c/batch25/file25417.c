// fichero 25417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25417;

Registro25417 crear_registro25417(int id) {
    Registro25417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
