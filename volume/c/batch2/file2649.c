// fichero 2649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2649;

Registro2649 crear_registro2649(int id) {
    Registro2649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
