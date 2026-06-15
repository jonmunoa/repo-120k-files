// fichero 25057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25057;

Registro25057 crear_registro25057(int id) {
    Registro25057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
