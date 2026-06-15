// fichero 32565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32565;

Registro32565 crear_registro32565(int id) {
    Registro32565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
