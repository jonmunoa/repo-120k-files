// fichero 37149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37149;

Registro37149 crear_registro37149(int id) {
    Registro37149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
