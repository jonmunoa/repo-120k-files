// fichero 10277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10277;

Registro10277 crear_registro10277(int id) {
    Registro10277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
