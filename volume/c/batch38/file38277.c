// fichero 38277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38277;

Registro38277 crear_registro38277(int id) {
    Registro38277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
