// fichero 36905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36905;

Registro36905 crear_registro36905(int id) {
    Registro36905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
