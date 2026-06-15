// fichero 30917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30917;

Registro30917 crear_registro30917(int id) {
    Registro30917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
