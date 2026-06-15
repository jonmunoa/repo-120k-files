// fichero 44417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44417;

Registro44417 crear_registro44417(int id) {
    Registro44417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
