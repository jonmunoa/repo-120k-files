// fichero 6093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6093;

Registro6093 crear_registro6093(int id) {
    Registro6093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
