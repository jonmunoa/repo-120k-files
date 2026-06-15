// fichero 3025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3025;

Registro3025 crear_registro3025(int id) {
    Registro3025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
