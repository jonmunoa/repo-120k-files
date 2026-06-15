// fichero 31133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31133;

Registro31133 crear_registro31133(int id) {
    Registro31133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
