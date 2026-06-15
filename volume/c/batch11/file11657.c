// fichero 11657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11657;

Registro11657 crear_registro11657(int id) {
    Registro11657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
