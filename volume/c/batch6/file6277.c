// fichero 6277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6277;

Registro6277 crear_registro6277(int id) {
    Registro6277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
