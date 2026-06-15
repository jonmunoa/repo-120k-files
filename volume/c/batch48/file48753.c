// fichero 48753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48753;

Registro48753 crear_registro48753(int id) {
    Registro48753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
