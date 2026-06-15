// fichero 38177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38177;

Registro38177 crear_registro38177(int id) {
    Registro38177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
