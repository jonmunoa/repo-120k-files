// fichero 44277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44277;

Registro44277 crear_registro44277(int id) {
    Registro44277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
