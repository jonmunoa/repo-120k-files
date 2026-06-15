// fichero 26277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26277;

Registro26277 crear_registro26277(int id) {
    Registro26277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
