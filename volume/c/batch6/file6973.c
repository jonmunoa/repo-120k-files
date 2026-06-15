// fichero 6973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6973;

Registro6973 crear_registro6973(int id) {
    Registro6973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
