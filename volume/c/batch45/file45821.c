// fichero 45821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45821;

Registro45821 crear_registro45821(int id) {
    Registro45821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
