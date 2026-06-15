// fichero 44485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44485;

Registro44485 crear_registro44485(int id) {
    Registro44485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
