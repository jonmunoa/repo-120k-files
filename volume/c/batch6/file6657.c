// fichero 6657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6657;

Registro6657 crear_registro6657(int id) {
    Registro6657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
