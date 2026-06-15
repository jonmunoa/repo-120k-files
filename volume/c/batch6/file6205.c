// fichero 6205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6205;

Registro6205 crear_registro6205(int id) {
    Registro6205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
