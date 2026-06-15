// fichero 23793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23793;

Registro23793 crear_registro23793(int id) {
    Registro23793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
