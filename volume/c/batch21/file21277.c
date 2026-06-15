// fichero 21277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21277;

Registro21277 crear_registro21277(int id) {
    Registro21277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
