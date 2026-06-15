// fichero 5025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5025;

Registro5025 crear_registro5025(int id) {
    Registro5025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
