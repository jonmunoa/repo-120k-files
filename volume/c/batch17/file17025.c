// fichero 17025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17025;

Registro17025 crear_registro17025(int id) {
    Registro17025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
