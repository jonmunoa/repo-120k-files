// fichero 34025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34025;

Registro34025 crear_registro34025(int id) {
    Registro34025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
