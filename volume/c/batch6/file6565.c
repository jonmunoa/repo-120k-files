// fichero 6565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6565;

Registro6565 crear_registro6565(int id) {
    Registro6565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
