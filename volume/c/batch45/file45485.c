// fichero 45485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45485;

Registro45485 crear_registro45485(int id) {
    Registro45485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
