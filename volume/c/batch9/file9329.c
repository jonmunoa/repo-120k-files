// fichero 9329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9329;

Registro9329 crear_registro9329(int id) {
    Registro9329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
