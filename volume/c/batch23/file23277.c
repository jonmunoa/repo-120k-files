// fichero 23277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23277;

Registro23277 crear_registro23277(int id) {
    Registro23277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
