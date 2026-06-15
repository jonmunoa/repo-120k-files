// fichero 2309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2309;

Registro2309 crear_registro2309(int id) {
    Registro2309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
