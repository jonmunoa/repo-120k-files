// fichero 14445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14445;

Registro14445 crear_registro14445(int id) {
    Registro14445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
