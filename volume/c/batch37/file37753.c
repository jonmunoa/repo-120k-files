// fichero 37753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37753;

Registro37753 crear_registro37753(int id) {
    Registro37753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
