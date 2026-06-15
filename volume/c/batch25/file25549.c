// fichero 25549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25549;

Registro25549 crear_registro25549(int id) {
    Registro25549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
