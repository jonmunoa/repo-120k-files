// fichero 38577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38577;

Registro38577 crear_registro38577(int id) {
    Registro38577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
