// fichero 4697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4697;

Registro4697 crear_registro4697(int id) {
    Registro4697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
