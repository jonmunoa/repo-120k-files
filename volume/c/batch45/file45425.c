// fichero 45425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45425;

Registro45425 crear_registro45425(int id) {
    Registro45425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
