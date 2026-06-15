// fichero 26877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26877;

Registro26877 crear_registro26877(int id) {
    Registro26877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
