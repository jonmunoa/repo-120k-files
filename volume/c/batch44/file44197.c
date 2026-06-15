// fichero 44197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44197;

Registro44197 crear_registro44197(int id) {
    Registro44197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
