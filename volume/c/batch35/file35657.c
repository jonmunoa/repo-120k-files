// fichero 35657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35657;

Registro35657 crear_registro35657(int id) {
    Registro35657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
