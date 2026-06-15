// fichero 45809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45809;

Registro45809 crear_registro45809(int id) {
    Registro45809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
