// fichero 18277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18277;

Registro18277 crear_registro18277(int id) {
    Registro18277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
