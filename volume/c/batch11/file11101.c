// fichero 11101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11101;

Registro11101 crear_registro11101(int id) {
    Registro11101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
