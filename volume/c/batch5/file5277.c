// fichero 5277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5277;

Registro5277 crear_registro5277(int id) {
    Registro5277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
