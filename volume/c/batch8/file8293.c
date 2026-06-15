// fichero 8293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8293;

Registro8293 crear_registro8293(int id) {
    Registro8293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
