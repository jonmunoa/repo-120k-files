// fichero 3485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3485;

Registro3485 crear_registro3485(int id) {
    Registro3485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
