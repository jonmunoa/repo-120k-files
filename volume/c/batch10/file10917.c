// fichero 10917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10917;

Registro10917 crear_registro10917(int id) {
    Registro10917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
