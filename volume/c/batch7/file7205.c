// fichero 7205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7205;

Registro7205 crear_registro7205(int id) {
    Registro7205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
