// fichero 44025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44025;

Registro44025 crear_registro44025(int id) {
    Registro44025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
