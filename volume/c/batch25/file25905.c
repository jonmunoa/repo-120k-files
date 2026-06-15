// fichero 25905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25905;

Registro25905 crear_registro25905(int id) {
    Registro25905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
