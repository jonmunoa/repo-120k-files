// fichero 45365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45365;

Registro45365 crear_registro45365(int id) {
    Registro45365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
