// fichero 20265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20265;

Registro20265 crear_registro20265(int id) {
    Registro20265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
