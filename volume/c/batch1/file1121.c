// fichero 1121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1121;

Registro1121 crear_registro1121(int id) {
    Registro1121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
