// fichero 36209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36209;

Registro36209 crear_registro36209(int id) {
    Registro36209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
