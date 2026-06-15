// fichero 11753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11753;

Registro11753 crear_registro11753(int id) {
    Registro11753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
