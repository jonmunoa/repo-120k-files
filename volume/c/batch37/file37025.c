// fichero 37025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37025;

Registro37025 crear_registro37025(int id) {
    Registro37025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
