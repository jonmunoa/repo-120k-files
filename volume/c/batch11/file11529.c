// fichero 11529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11529;

Registro11529 crear_registro11529(int id) {
    Registro11529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
