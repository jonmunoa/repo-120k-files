// fichero 25933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25933;

Registro25933 crear_registro25933(int id) {
    Registro25933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
