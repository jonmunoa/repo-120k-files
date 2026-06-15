// fichero 44133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44133;

Registro44133 crear_registro44133(int id) {
    Registro44133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
