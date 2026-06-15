// fichero 38789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38789;

Registro38789 crear_registro38789(int id) {
    Registro38789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
