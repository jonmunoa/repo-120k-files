// fichero 25793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25793;

Registro25793 crear_registro25793(int id) {
    Registro25793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
