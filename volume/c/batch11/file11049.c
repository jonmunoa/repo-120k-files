// fichero 11049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11049;

Registro11049 crear_registro11049(int id) {
    Registro11049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
