// fichero 11533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11533;

Registro11533 crear_registro11533(int id) {
    Registro11533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
