// fichero 6769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6769;

Registro6769 crear_registro6769(int id) {
    Registro6769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
