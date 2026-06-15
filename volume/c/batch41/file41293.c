// fichero 41293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41293;

Registro41293 crear_registro41293(int id) {
    Registro41293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
