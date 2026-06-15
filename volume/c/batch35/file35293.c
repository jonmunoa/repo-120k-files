// fichero 35293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35293;

Registro35293 crear_registro35293(int id) {
    Registro35293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
