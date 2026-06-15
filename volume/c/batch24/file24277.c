// fichero 24277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24277;

Registro24277 crear_registro24277(int id) {
    Registro24277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
