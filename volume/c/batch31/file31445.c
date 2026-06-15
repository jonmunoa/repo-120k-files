// fichero 31445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31445;

Registro31445 crear_registro31445(int id) {
    Registro31445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
