// fichero 35025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35025;

Registro35025 crear_registro35025(int id) {
    Registro35025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
