// fichero 30277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30277;

Registro30277 crear_registro30277(int id) {
    Registro30277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
