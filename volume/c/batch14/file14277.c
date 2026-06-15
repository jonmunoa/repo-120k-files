// fichero 14277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14277;

Registro14277 crear_registro14277(int id) {
    Registro14277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
