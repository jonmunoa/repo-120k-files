// fichero 6729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6729;

Registro6729 crear_registro6729(int id) {
    Registro6729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
