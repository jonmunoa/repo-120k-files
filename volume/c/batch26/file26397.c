// fichero 26397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26397;

Registro26397 crear_registro26397(int id) {
    Registro26397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
