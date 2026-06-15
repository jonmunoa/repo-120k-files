// fichero 2669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2669;

Registro2669 crear_registro2669(int id) {
    Registro2669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
