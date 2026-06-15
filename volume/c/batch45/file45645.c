// fichero 45645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45645;

Registro45645 crear_registro45645(int id) {
    Registro45645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
