// fichero 40541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40541;

Registro40541 crear_registro40541(int id) {
    Registro40541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
