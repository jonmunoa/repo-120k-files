// fichero 28917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28917;

Registro28917 crear_registro28917(int id) {
    Registro28917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
