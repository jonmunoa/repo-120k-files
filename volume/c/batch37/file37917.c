// fichero 37917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37917;

Registro37917 crear_registro37917(int id) {
    Registro37917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
