// fichero 2565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2565;

Registro2565 crear_registro2565(int id) {
    Registro2565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
