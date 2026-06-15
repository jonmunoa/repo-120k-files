// fichero 2517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2517;

Registro2517 crear_registro2517(int id) {
    Registro2517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
