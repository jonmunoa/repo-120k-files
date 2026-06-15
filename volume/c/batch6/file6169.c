// fichero 6169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6169;

Registro6169 crear_registro6169(int id) {
    Registro6169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
