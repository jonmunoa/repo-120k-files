// fichero 33445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33445;

Registro33445 crear_registro33445(int id) {
    Registro33445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
