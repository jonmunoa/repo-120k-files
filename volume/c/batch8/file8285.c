// fichero 8285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8285;

Registro8285 crear_registro8285(int id) {
    Registro8285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
