// fichero 41025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41025;

Registro41025 crear_registro41025(int id) {
    Registro41025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
