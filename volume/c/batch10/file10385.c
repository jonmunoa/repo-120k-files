// fichero 10385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10385;

Registro10385 crear_registro10385(int id) {
    Registro10385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
