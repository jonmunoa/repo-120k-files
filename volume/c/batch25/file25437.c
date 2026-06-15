// fichero 25437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25437;

Registro25437 crear_registro25437(int id) {
    Registro25437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
