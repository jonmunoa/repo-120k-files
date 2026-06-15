// fichero 35149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35149;

Registro35149 crear_registro35149(int id) {
    Registro35149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
