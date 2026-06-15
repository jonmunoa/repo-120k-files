// fichero 2533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2533;

Registro2533 crear_registro2533(int id) {
    Registro2533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
