// fichero 25397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25397;

Registro25397 crear_registro25397(int id) {
    Registro25397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
