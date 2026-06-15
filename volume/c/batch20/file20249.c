// fichero 20249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20249;

Registro20249 crear_registro20249(int id) {
    Registro20249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
