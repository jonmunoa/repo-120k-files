// fichero 7913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7913;

Registro7913 crear_registro7913(int id) {
    Registro7913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
