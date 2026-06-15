// fichero 26913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26913;

Registro26913 crear_registro26913(int id) {
    Registro26913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
