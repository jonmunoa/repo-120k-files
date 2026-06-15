// fichero 26581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26581;

Registro26581 crear_registro26581(int id) {
    Registro26581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
