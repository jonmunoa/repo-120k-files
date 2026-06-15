// fichero 49301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49301;

Registro49301 crear_registro49301(int id) {
    Registro49301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
