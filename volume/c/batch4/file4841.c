// fichero 4841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4841;

Registro4841 crear_registro4841(int id) {
    Registro4841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
