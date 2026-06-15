// fichero 6025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6025;

Registro6025 crear_registro6025(int id) {
    Registro6025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
