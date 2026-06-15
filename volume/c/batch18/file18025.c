// fichero 18025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18025;

Registro18025 crear_registro18025(int id) {
    Registro18025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
