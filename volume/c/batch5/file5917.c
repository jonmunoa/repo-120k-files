// fichero 5917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5917;

Registro5917 crear_registro5917(int id) {
    Registro5917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
