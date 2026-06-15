// fichero 30169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30169;

Registro30169 crear_registro30169(int id) {
    Registro30169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
