// fichero 26793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26793;

Registro26793 crear_registro26793(int id) {
    Registro26793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
