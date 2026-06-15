// fichero 24025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24025;

Registro24025 crear_registro24025(int id) {
    Registro24025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
