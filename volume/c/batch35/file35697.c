// fichero 35697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35697;

Registro35697 crear_registro35697(int id) {
    Registro35697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
