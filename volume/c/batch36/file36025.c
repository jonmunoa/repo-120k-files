// fichero 36025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36025;

Registro36025 crear_registro36025(int id) {
    Registro36025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
