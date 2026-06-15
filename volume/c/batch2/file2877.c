// fichero 2877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2877;

Registro2877 crear_registro2877(int id) {
    Registro2877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
