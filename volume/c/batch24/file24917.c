// fichero 24917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24917;

Registro24917 crear_registro24917(int id) {
    Registro24917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
