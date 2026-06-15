// fichero 2689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2689;

Registro2689 crear_registro2689(int id) {
    Registro2689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
