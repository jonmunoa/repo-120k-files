// fichero 47177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47177;

Registro47177 crear_registro47177(int id) {
    Registro47177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
