// fichero 9025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9025;

Registro9025 crear_registro9025(int id) {
    Registro9025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
