// fichero 41277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41277;

Registro41277 crear_registro41277(int id) {
    Registro41277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
