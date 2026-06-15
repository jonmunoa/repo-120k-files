// fichero 3769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3769;

Registro3769 crear_registro3769(int id) {
    Registro3769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
