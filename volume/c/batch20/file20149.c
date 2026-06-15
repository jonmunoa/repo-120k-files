// fichero 20149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20149;

Registro20149 crear_registro20149(int id) {
    Registro20149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
