// fichero 8937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8937;

Registro8937 crear_registro8937(int id) {
    Registro8937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
