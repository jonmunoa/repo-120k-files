// fichero 45549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45549;

Registro45549 crear_registro45549(int id) {
    Registro45549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
