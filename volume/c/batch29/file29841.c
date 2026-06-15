// fichero 29841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29841;

Registro29841 crear_registro29841(int id) {
    Registro29841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
