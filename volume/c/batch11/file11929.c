// fichero 11929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11929;

Registro11929 crear_registro11929(int id) {
    Registro11929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
