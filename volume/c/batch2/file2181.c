// fichero 2181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2181;

Registro2181 crear_registro2181(int id) {
    Registro2181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
