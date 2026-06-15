// fichero 44445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44445;

Registro44445 crear_registro44445(int id) {
    Registro44445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
