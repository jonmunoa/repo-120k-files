// fichero 37905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37905;

Registro37905 crear_registro37905(int id) {
    Registro37905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
