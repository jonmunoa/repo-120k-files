// fichero 25529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25529;

Registro25529 crear_registro25529(int id) {
    Registro25529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
