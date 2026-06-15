// fichero 45797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45797;

Registro45797 crear_registro45797(int id) {
    Registro45797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
