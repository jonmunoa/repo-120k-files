// fichero 20025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20025;

Registro20025 crear_registro20025(int id) {
    Registro20025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
