// fichero 37301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37301;

Registro37301 crear_registro37301(int id) {
    Registro37301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
