// fichero 36009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36009;

Registro36009 crear_registro36009(int id) {
    Registro36009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
