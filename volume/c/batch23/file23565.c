// fichero 23565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23565;

Registro23565 crear_registro23565(int id) {
    Registro23565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
