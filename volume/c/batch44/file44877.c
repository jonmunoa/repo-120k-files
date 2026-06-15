// fichero 44877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44877;

Registro44877 crear_registro44877(int id) {
    Registro44877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
