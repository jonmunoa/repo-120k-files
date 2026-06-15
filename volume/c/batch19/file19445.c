// fichero 19445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19445;

Registro19445 crear_registro19445(int id) {
    Registro19445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
