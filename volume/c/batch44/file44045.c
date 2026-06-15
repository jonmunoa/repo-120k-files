// fichero 44045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44045;

Registro44045 crear_registro44045(int id) {
    Registro44045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
