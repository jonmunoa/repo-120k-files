// fichero 45177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45177;

Registro45177 crear_registro45177(int id) {
    Registro45177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
