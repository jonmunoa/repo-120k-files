// fichero 17485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17485;

Registro17485 crear_registro17485(int id) {
    Registro17485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
