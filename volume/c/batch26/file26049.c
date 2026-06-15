// fichero 26049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26049;

Registro26049 crear_registro26049(int id) {
    Registro26049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
