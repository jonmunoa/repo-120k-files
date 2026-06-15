// fichero 149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro149;

Registro149 crear_registro149(int id) {
    Registro149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
