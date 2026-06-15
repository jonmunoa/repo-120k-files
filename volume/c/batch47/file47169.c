// fichero 47169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47169;

Registro47169 crear_registro47169(int id) {
    Registro47169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
