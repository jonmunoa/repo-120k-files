// fichero 13277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13277;

Registro13277 crear_registro13277(int id) {
    Registro13277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
