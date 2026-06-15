// fichero 2617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2617;

Registro2617 crear_registro2617(int id) {
    Registro2617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
