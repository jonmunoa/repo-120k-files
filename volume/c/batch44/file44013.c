// fichero 44013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44013;

Registro44013 crear_registro44013(int id) {
    Registro44013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
