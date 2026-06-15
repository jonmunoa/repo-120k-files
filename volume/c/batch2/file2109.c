// fichero 2109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2109;

Registro2109 crear_registro2109(int id) {
    Registro2109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
