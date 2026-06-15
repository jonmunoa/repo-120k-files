// fichero 769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro769;

Registro769 crear_registro769(int id) {
    Registro769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
