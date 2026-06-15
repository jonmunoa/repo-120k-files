// fichero 39277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39277;

Registro39277 crear_registro39277(int id) {
    Registro39277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
