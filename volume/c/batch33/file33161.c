// fichero 33161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33161;

Registro33161 crear_registro33161(int id) {
    Registro33161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
