// fichero 15841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15841;

Registro15841 crear_registro15841(int id) {
    Registro15841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
