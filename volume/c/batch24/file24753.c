// fichero 24753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24753;

Registro24753 crear_registro24753(int id) {
    Registro24753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
