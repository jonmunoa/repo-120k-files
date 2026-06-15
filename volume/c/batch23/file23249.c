// fichero 23249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23249;

Registro23249 crear_registro23249(int id) {
    Registro23249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
