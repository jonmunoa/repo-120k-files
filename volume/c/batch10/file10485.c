// fichero 10485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10485;

Registro10485 crear_registro10485(int id) {
    Registro10485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
