// fichero 25193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25193;

Registro25193 crear_registro25193(int id) {
    Registro25193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
