// fichero 2049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2049;

Registro2049 crear_registro2049(int id) {
    Registro2049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
