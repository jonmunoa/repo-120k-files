// fichero 9277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9277;

Registro9277 crear_registro9277(int id) {
    Registro9277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
