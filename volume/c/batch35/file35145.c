// fichero 35145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35145;

Registro35145 crear_registro35145(int id) {
    Registro35145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
