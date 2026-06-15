// fichero 3917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3917;

Registro3917 crear_registro3917(int id) {
    Registro3917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
